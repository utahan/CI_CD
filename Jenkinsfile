pipeline {
    agent any

    stages {
        stage('Checkout external proj') {
            steps {
                git branch: 'master',
                    credentialsId: 'git_user',
                    url: 'http://192.168.99.100:3000/new_org/new_repo.git'
    
                sh "ls -lat"
            }
        }
        
        stage('Build') {
            steps {
                sh '''
                    cd build
                    cmake ..
                    make
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
                sh '''
                    cd build
                    ./testproj
                '''
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}